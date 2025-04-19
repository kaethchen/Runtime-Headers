@class NSString, NSMutableArray, NSRegularExpression;

@interface PLCoreDataSqlLogBinder : NSObject {
    NSString *_selectString;
    NSMutableArray *_bindValues;
    NSRegularExpression *_selectRegex;
    NSRegularExpression *_bindRegex;
}

@property (readonly, copy) NSString *boundSql;

+ (id)bindSelectString:(id)a0 bindValueStrings:(id)a1;
+ (id)stringFromBindVariable:(id)a0 withTypePrefix:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addLogLine:(id)a0;
- (void)setSelectString:(id)a0 bindValueStrings:(id)a1;

@end
