@class NSString;

@interface SIRINLUAsrTokenInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *postITNText;
@property (retain, nonatomic) NSString *phoneSequence;
@property (retain, nonatomic) NSString *ipaPhoneSequence;
@property (nonatomic) BOOL addSpaceAfter;
@property (nonatomic) BOOL removeSpaceAfter;
@property (nonatomic) BOOL removeSpaceBefore;
@property (nonatomic) double confidenceScore;
@property (nonatomic) unsigned int beginIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) int startMilliSeconds;
@property (nonatomic) int endMilliSeconds;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPostITNText:(id)a0 phoneSequence:(id)a1 ipaPhoneSequence:(id)a2 addSpaceAfter:(BOOL)a3 removeSpaceAfter:(BOOL)a4 removeSpaceBefore:(BOOL)a5 confidenceScore:(double)a6 beginIndex:(unsigned int)a7 endIndex:(unsigned int)a8;
- (id)initWithPostITNText:(id)a0 phoneSequence:(id)a1 ipaPhoneSequence:(id)a2 addSpaceAfter:(BOOL)a3 removeSpaceAfter:(BOOL)a4 removeSpaceBefore:(BOOL)a5 confidenceScore:(double)a6 beginIndex:(unsigned int)a7 endIndex:(unsigned int)a8 startMilliSeconds:(int)a9 endMilliSeconds:(int)a10;

@end
