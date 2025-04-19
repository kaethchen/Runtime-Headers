@class NSDictionary, NSData, NSString;

@interface RFMapPoint : NSObject <RFMapPoint, NSSecureCoding, NSCopying> {
    struct { unsigned char x : 1; unsigned char y : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasX;
- (BOOL)hasY;
- (id)initWithProtobuf:(id)a0;

@end
