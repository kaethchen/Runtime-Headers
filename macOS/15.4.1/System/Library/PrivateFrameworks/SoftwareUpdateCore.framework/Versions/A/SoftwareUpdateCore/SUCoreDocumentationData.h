@class NSString, NSData;

@interface SUCoreDocumentationData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *humanReadableUpdateName;
@property (retain, nonatomic) NSString *humanReadableUpdateTitle;
@property (retain, nonatomic) NSString *humanReadableUpdateVersion;
@property (retain, nonatomic) NSData *readme;
@property (retain, nonatomic) NSData *readmeSummary;
@property (retain, nonatomic) NSData *license;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithDocumentationDataDictionary:(id)a0;

@end
