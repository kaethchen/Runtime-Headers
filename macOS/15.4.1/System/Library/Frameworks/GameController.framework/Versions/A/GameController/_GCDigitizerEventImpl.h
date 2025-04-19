@class NSString;

@interface _GCDigitizerEventImpl : NSObject <_GCDigitizerEvent>

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDigitizerEvent:(id)a0;

@end
