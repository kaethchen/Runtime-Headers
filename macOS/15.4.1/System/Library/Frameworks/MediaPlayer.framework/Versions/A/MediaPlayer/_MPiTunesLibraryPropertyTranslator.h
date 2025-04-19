@class NSString;

@interface _MPiTunesLibraryPropertyTranslator : NSObject <MPEntityPropertyTranslator>

@property (readonly, nonatomic) id /* block */ valueTransformBlock;
@property (readonly, nonatomic) NSString *libraryItemProperty;
@property (readonly, nonatomic) void /* function */ *valueTransformFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)translatorForValueTransformFunction:(void /* function */ *)a0;
+ (id)translatorWithBlock:(id /* block */)a0;
+ (id)translatorWithLibraryItemProperty:(id)a0;

- (void).cxx_destruct;
- (id)valueFromSource:(id)a0 context:(id)a1;

@end
