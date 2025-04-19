@class NSString, NSData, NSObject;
@protocol OS_nw_advertise_descriptor;

@interface NWAdvertiseDescriptor : NSObject

@property (retain, nonatomic) NSObject<OS_nw_advertise_descriptor> *internalDescriptor;
@property (readonly, nonatomic) NSString *bonjourServiceDomain;
@property (readonly, nonatomic) NSString *bonjourServiceType;
@property (readonly, nonatomic) NSString *bonjourServiceName;
@property (retain, nonatomic) NSData *txtRecord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (id)initWithName:(id)a0 type:(id)a1 domain:(id)a2;
- (id)privateDescription;

@end
