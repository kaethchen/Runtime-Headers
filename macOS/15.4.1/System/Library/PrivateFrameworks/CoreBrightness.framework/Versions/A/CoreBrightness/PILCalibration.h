@interface PILCalibration : NSObject

@property (readonly, nonatomic) unsigned short cilCalibration;
@property (readonly, nonatomic) unsigned short milCalibration;

- (id)initWithRawCalibration:(id)a0;

@end
