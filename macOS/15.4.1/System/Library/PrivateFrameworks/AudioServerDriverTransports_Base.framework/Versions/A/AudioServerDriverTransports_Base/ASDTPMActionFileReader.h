@class NSString, ASDPropertyAddress;

@interface ASDTPMActionFileReader : ASDTPMAction

@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) ASDPropertyAddress *propertyAddress;
@property (nonatomic) unsigned int propertyDataType;

- (void).cxx_destruct;
- (int)action;
- (id)convert:(id)a0;
- (id)initWithConfig:(id)a0 forSequencer:(id)a1;

@end
