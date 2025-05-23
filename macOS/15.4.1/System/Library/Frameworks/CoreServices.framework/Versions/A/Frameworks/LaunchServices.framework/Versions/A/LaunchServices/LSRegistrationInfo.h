@interface LSRegistrationInfo : NSObject <NSSecureCoding, NSMutableCopying> {
    unsigned int version;
    unsigned int action;
    unsigned int options;
    unsigned int itemFlags;
    unsigned int containerUnit;
    unsigned int bundleUnit;
    unsigned int bundleClass;
    unsigned long long inoBundle;
    unsigned long long inoExec;
    double contentModDate;
    double executableModDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
