@class NSString;

@interface HDIDSDevice : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *destinationID;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, copy, nonatomic) NSString *buildVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIDSDevice:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 destinationID:(id)a2 deviceType:(long long)a3 buildVersion:(id)a4;

@end
