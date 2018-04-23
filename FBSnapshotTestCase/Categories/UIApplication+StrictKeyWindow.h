/*
 *  Copyright (c) 2017-2018, Uber Technologies, Inc.
 *  Copyright (c) 2015-2018, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the
 *  LICENSE file in the root directory of this source tree.
 *
 */

#import <UIKit/UIKit.h>

@interface UIApplication (StrictKeyWindow)

/**
  @return The receiver's @c keyWindow. Raises an assertion if @c nil.
 */
- (UIWindow *)fb_strictKeyWindow;

@end
