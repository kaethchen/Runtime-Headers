@class NSString;

@interface XQueryPrologItemDefaultCollation : NSObject <XQueryPrologItemBehavior> {
    NSString *collation;
    long long line;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)collation:(id)a0 atLine:(long long)a1;

@end
