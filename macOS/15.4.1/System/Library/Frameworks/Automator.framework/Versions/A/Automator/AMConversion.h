@class NSArray, NSString, NSError;

@interface AMConversion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *paths;
@property (retain, nonatomic) NSArray *pathTaken;
@property (retain, nonatomic) NSArray *preferredPath;
@property (retain, nonatomic) NSString *inputType;
@property (retain, nonatomic) NSString *outputType;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long preferredPathCount;

+ (id)conversionWithInputType:(id)a0 outputType:(id)a1 paths:(id)a2 error:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)sortedPathsForPaths:(id)a0;
- (void)updateWithConversionFromXPC:(id)a0;

@end
