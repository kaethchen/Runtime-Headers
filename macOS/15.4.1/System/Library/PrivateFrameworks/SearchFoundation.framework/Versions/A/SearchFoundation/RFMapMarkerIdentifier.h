@class NSString, NSDictionary, NSData;

@interface RFMapMarkerIdentifier : NSObject <RFMapMarkerIdentifier, NSSecureCoding, NSCopying> {
    struct { unsigned char isForCameraPositionOnly : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *muid;
@property (copy, nonatomic) NSString *resultProviderID;
@property (nonatomic) BOOL isForCameraPositionOnly;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasIsForCameraPositionOnly;

@end
