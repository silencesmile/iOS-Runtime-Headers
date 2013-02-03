/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAccelerometerDataInternal : NSObject <NSCopying> {
    struct { 
        double x; 
        double y; 
        double z; 
    } fAcceleration;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithClientAcceleration:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setAcceleration:(struct { double x1; double x2; double x3; double x4; })arg1;

@end