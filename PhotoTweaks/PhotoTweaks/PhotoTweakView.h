//
//  PhotoView.h
//  PhotoTweaks
//
//  Created by Tu You on 14/12/2.
//  Copyright (c) 2014年 Tu You. All rights reserved.
//

#import <UIKit/UIKit.h>

extern const CGFloat kMaxRotationAngle;

@class CropView;

@interface PhotoContentView : UIView

@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) UIImage *image;

@end

@protocol CropViewDelegate <NSObject>

- (void)cropEnded:(CropView *)cropView;
- (void)cropMoved:(CropView *)cropView;

@end

@interface CropView : UIView

@property (nonatomic, assign) BOOL isUsingForAvatar;

@end

@interface PhotoTweakView : UIView

@property (nonatomic, assign, readonly) CGFloat angle;
@property (nonatomic, assign, readonly) CGPoint photoContentOffset;

@property (nonatomic, strong, readonly) CropView *cropView;
@property (nonatomic, strong, readonly) PhotoContentView *photoContentView;
@property (nonatomic, strong, readonly) UISlider *slider;
@property (nonatomic, strong, readonly) UIButton *resetBtn;


- (instancetype)initWithFrame:(CGRect)frame
                        image:(UIImage *)image
             maxRotationAngle:(CGFloat)maxRotationAngle
             isUsingForAvatar:(BOOL)isUsingForAvatar;

- (instancetype)initWithFrame:(CGRect)frame
                        image:(UIImage *)image;

- (void)sliderValueChanged:(UISlider *)sender;
- (CGPoint)photoTranslation;
- (CGAffineTransform)photoTransform;
- (UIImage *)coppedImage;

@end
