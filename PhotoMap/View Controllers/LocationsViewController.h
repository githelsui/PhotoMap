//
//  LocationsViewController.h
//  PhotoMap
//
//  Created by emersonmalca on 7/8/18.
//  Copyright © 2018 Codepath. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LocationsViewControllerDelegate.h"
@interface LocationsViewController : UIViewController
@property (weak, nonatomic) id<LocationsViewControllerDelegate> delegate;
@end
