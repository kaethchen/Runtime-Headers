@class NSString, NSMutableArray, NSArray;

@interface NDODeviceSection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSString *label;
@property (retain) NSMutableArray *privateDeviceList;
@property (readonly) NSArray *deviceList;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addDevice:(id)a0;
- (id)deviceForSN:(id)a0;
- (id)initWithLabel:(id)a0 identifier:(id)a1;

@end
