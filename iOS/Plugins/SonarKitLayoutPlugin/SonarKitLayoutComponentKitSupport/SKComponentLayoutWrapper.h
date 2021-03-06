/*
 *  Copyright (c) 2018-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */
#import <Foundation/Foundation.h>

#import <ComponentKit/CKComponentLayout.h>
#import <ComponentKit/CKFlexboxComponent.h>

@protocol CKInspectableView;

@interface SKComponentLayoutWrapper : NSObject

@property (nonatomic, weak, readonly) CKComponent *component;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) CGSize size;
@property (nonatomic, readonly) CGPoint position;
@property (nonatomic, readonly) std::vector<SKComponentLayoutWrapper *> children;

// Null for layouts which are not direct children of a CKFlexboxComponent
@property (nonatomic, readonly) BOOL isFlexboxChild;
@property (nonatomic, readonly) CKFlexboxComponentChild flexboxChild;

+ (instancetype)newFromRoot:(id<CKInspectableView>)root;

@end
