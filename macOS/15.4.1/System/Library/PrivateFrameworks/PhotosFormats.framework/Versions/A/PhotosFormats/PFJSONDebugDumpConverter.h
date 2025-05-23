@interface PFJSONDebugDumpConverter : NSObject

@property (copy) id /* block */ unknownTypeHandler;
@property BOOL enablePretty;

- (void).cxx_destruct;
- (id)JSONCompatibleObjectForObject:(id)a0;
- (id)JSONForObject:(id)a0 error:(id *)a1;
- (id)initWithUnknownTypeHandler:(id /* block */)a0;
- (id)unknownObjectTypePlaceholderForObject:(id)a0;

@end
