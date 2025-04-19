@interface _RSCamera : NSObject <RSCamera>

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } pose;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } intrinsics;
@property (nonatomic) struct CGSize { double width; double height; } imageResolution;
@property (nonatomic) long long trackingState;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;

@end
