@class NSData, NSObject, PK_ipp_collection_t;

@interface PK_ipp_value_t : NSObject <NSCopying, NSSecureCoding> {
    NSObject *x_payload;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property int integer;
@property BOOL boolean;
@property struct ipp_value_date_t { unsigned char x0[11]; } date;
@property struct ipp_value_resolution_t { int x0; int x1; int x2; } resolution;
@property struct ipp_value_range_t { int x0; int x1; } range;
@property struct ipp_value_string_t { id x0; id x1; } string;
@property (retain) NSData *unknown;
@property (retain) PK_ipp_collection_t *collection;

+ (id)valueWithBoolean:(int)a0;
+ (id)valueWithInteger:(int)a0;
+ (id)valueWithString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (struct ipp_value_string_t { id x0; id x1; })string;
- (void).cxx_destruct;
- (struct ipp_value_date_t { unsigned char x0[11]; })date;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setString:(struct ipp_value_string_t { id x0; id x1; })a0;
- (struct ipp_value_range_t { int x0; int x1; })range;
- (void)setRange:(struct ipp_value_range_t { int x0; int x1; })a0;
- (id)collection;
- (int)integer;
- (void)setCollection:(id)a0;
- (void)setDate:(struct ipp_value_date_t { unsigned char x0[11]; })a0;
- (void)setInteger:(int)a0;
- (struct ipp_value_resolution_t { int x0; int x1; int x2; })resolution;
- (void)setResolution:(struct ipp_value_resolution_t { int x0; int x1; int x2; })a0;
- (id)unknown;
- (void)setUnknown:(id)a0;
- (BOOL)boolean;
- (id)loggingValue:(int)a0;
- (void)setBoolean:(BOOL)a0;

@end
