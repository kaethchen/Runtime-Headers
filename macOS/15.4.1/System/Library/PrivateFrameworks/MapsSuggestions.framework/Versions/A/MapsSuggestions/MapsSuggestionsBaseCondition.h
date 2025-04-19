@class NSString;

@interface MapsSuggestionsBaseCondition : NSObject <MapsSuggestionsCondition> {
    NSString *_name;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (BOOL)isTrue;
- (id)nameForJSON;
- (id)objectForJSON;

@end
