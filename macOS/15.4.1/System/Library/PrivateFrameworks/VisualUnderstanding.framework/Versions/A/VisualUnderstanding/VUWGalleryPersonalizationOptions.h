@class NSArray, NSString;

@interface VUWGalleryPersonalizationOptions : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ boundingBox;
    void /* unknown type, empty encoding */ adapterIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) void /* unknown type, empty encoding */ seed;
@property (nonatomic, copy) NSArray *boundingBox;
@property (nonatomic, copy) NSString *adapterIdentifier;
@property (nonatomic, retain) void /* unknown type, empty encoding */ keyObservation;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
