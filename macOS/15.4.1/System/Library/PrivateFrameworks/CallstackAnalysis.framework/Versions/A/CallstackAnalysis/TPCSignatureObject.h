@class NSString, NSArray, NSMutableArray;

@interface TPCSignatureObject : NSObject

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *build;
@property (copy, nonatomic) NSString *function;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *dataUUID;
@property (copy, nonatomic) NSString *signatureID;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSArray *insight;
@property (nonatomic) unsigned long long logNumber;
@property (nonatomic) unsigned long long hangTime;
@property (nonatomic) unsigned long long diskWritePercentage;
@property (nonatomic) unsigned long long occurrenceCount;
@property (nonatomic) unsigned long long childrenCount;
@property (nonatomic) BOOL isSymbolicated;
@property (nonatomic) BOOL isThirdParty;
@property (nonatomic) long long frameType;
@property (retain, nonatomic) TPCSignatureObject *nextWithSameKey;
@property (retain, nonatomic) TPCSignatureObject *previousWithSameKey;
@property (retain, nonatomic) TPCSignatureObject *parent;
@property (retain, nonatomic) NSMutableArray *children;

+ (BOOL)isBlockInvokeFrame:(id)a0;
+ (BOOL)isEqualToCleansedString:(id)a0 string2:(id)a1;
+ (BOOL)isSwiftClosureFrame:(id)a0;
+ (id)retrieveModifiedFrame:(id)a0 frameType:(long long)a1;

- (id)init;
- (void).cxx_destruct;

@end
