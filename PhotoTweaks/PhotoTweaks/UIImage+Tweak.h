//
//  UIImage+Tweak.h
//  PhotoTweaks
//
//  Created by Ngoc Thang on 2/9/20.
//  Copyright © 2020 Tu You. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (Tweak)

+ (CGImageRef)newScaledImage:(CGImageRef)source
             withOrientation:(UIImageOrientation)orientation
                      toSize:(CGSize)size
                 withQuality:(CGInterpolationQuality)quality;

+ (CGImageRef)newTransformedImage:(CGAffineTransform)transform
                      sourceImage:(CGImageRef)sourceImage
                       sourceSize:(CGSize)sourceSize
                sourceOrientation:(UIImageOrientation)sourceOrientation
                      outputWidth:(CGFloat)outputWidth
                         cropSize:(CGSize)cropSize
                    imageViewSize:(CGSize)imageViewSize;

+ (UIImage *)imageWithView:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
