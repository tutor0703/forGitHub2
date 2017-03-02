//
//  AppDelegate.h
//  forGitHub2
//
//  Created by tutor0703 on 02.03.17.
//  Copyright © 2017 tutor0703. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

