/**
 * Copyright 2018-present Facebook.
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 * @format
 */

import {Component} from 'react';
import type {
  Element,
  ElementID,
  ElementSearchResultSet,
  ContextMenuExtension,
} from 'sonar';

export class AXElementsInspector extends Component<{
  onElementExpanded: (key: ElementID, deep: boolean) => void,
  onElementSelected: (key: ElementID) => void,
  onElementHovered: ?(key: ?ElementID) => void,
  onValueChanged: ?(path: Array<string>, val: any) => void,
  selected: ?ElementID,
  focused: ?ElementID,
  searchResults?: ?ElementSearchResultSet,
  root: ?ElementID,
  elements: {[key: ElementID]: Element},
  useAppSidebar?: boolean,
  contextMenuExtensions: Array<ContextMenuExtension>,
}> {
  render() {
    return null;
  }
}

export const AXToggleButtonEnabled: boolean = false;
