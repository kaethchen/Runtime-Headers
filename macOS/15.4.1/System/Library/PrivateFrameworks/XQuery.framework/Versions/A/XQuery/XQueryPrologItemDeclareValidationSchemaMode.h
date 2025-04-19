@class NSString;

@interface XQueryPrologItemDeclareValidationSchemaMode : NSObject <XQueryPrologItemBehavior> {
    int mode;
    long long line;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)schemaMode:(int)a0 atLine:(long long)a1;

- (void)XQueryUpdateProlog:(id)a0;

@end
