@class NSArray, NSMutableDictionary, FSTaskOptions;

@interface FSTaskOptionsBundle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableDictionary *extras;
@property (readonly, copy) NSArray *options;
@property (readonly, copy) NSArray *parameters;
@property (readonly, copy) FSTaskOptions *taskOptions;

+ (id)bundleForArguments:(char **)a0 count:(int)a1 extension:(id)a2 operationType:(unsigned char)a3 errorHandler:(id /* block */)a4;
+ (id)bundleForArguments:(char **)a0 count:(int)a1 syntaxDictionary:(id)a2 errorHandler:(id /* block */)a3;
+ (void)resetOptionEnumeration;

- (id)init;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addOption:(id)a0;
- (void)enumerateOptionsUsingBlock:(id /* block */)a0;
- (void)enumerateOptionsWithBlock:(id /* block */)a0;
- (id)initWithOptionString:(char **)a0 count:(int)a1 optionDictionary:(id)a2 errorHandler:(id /* block */)a3;
- (int)mapStringToKind:(id)a0;

@end
