@class NSString, NSDictionary, NSArray, NSMutableDictionary;

@interface ODMappings : NSObject {
    NSMutableDictionary *recordTypes;
}

@property (readonly, copy) NSDictionary *dictionary;
@property (copy) NSString *comment;
@property (copy) NSString *templateName;
@property (copy) NSString *identifier;
@property (readonly, copy) NSArray *recordTypes;
@property (copy) NSString *function;
@property (copy) NSArray *functionAttributes;

+ (id)mappings;
+ (id)mappingsFromDictionary:(id)a0;

- (void)dealloc;
- (id)init;
- (id)recordMapForStandardRecordType:(id)a0;
- (id)recordTypes;
- (void)setRecordMap:(id)a0 forStandardRecordType:(id)a1;

@end
