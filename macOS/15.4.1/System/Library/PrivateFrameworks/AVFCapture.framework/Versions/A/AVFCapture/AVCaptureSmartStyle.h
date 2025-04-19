@class NSString;

@interface AVCaptureSmartStyle : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSString *cast;
@property (readonly, nonatomic) float intensity;
@property (readonly, nonatomic) float toneBias;
@property (readonly, nonatomic) float colorBias;
@property (readonly, nonatomic) long long version;

+ (id)identityStyle;
+ (id)styleWithCast:(id)a0 intensity:(float)a1 toneBias:(float)a2 colorBias:(float)a3;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithCast:(id)a0 intensity:(float)a1 toneBias:(float)a2 colorBias:(float)a3;

@end
