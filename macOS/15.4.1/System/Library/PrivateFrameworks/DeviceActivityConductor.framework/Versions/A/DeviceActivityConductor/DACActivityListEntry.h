@class DACActivityDescriptor, DACChangeMarker, NSDate;

@interface DACActivityListEntry : NSObject <NSSecureCoding, NSCopying> {
    DACActivityDescriptor *_activity;
    NSDate *_date;
    unsigned long long _reason;
    DACActivityDescriptor *_origin;
    DACChangeMarker *_changeMarker;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
