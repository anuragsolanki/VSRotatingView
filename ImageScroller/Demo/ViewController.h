//
//  ViewController.h
//  ImageScroller
//
//  Created by Anurag Solanki on 12/03/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VSRotatingView.h"

@interface ViewController : UIViewController <RotatingViewDelegate>
{
    UIImageView *sectionBackground;
}

@property (nonatomic, retain) IBOutlet UIImageView *sectionBackground;


@end
