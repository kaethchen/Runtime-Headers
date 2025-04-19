@class NSString;

@interface UARPUpdaterServicePreferences : NSObject

@property (readonly) NSString *domain;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;
- (id)uuidForAccessory:(id)a0 serialNumber:(id)a1 error:(id *)a2;

@end
