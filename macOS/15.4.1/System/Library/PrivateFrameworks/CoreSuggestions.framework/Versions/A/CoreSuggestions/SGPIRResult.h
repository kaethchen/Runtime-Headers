@class NSString, NSNumber, NSTimeZone;

@interface SGPIRResult : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSNumber *latitude;
@property (readonly, nonatomic) NSNumber *longitude;
@property (readonly, nonatomic) NSTimeZone *timezone;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 address:(id)a1 latitude:(id)a2 longitude:(id)a3 timezone:(id)a4;

@end
