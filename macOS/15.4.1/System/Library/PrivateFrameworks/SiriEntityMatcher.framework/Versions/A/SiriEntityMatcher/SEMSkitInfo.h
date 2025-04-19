@class NSString, NSMutableDictionary, NSNumber, SEMDictionaryLog;

@interface SEMSkitInfo : NSObject {
    SEMDictionaryLog *_log;
    NSString *_description;
    NSMutableDictionary *_pending;
    BOOL _clear;
}

@property (readonly, nonatomic) NSNumber *localeType;
@property (readonly, nonatomic) NSNumber *indexFeatures;

+ (id)readOnlySkitInfoAtDirectory:(id)a0;
+ (id)writableSkitInfoAtDirectory:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)clear;
- (BOOL)commitUpdates:(id *)a0;
- (void)rollbackUpdates;
- (void)_createPendingLog;
- (id)initWithSkitDirectory:(id)a0 readOnly:(BOOL)a1 error:(id *)a2;
- (void)updateIndexFeatures:(id)a0;
- (void)updateLocaleType:(id)a0;

@end
