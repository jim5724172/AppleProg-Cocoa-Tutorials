//
//  AppDelegate.h
//  Lesson 40
//
//  Created by Lucas Derraugh on 5/20/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTextField *titleTextField;

- (IBAction)changeTitle:(id)sender;

@end
