@class NSString;

@interface NSSQLAliasGenerator : NSObject {
    unsigned int _nextTableAlias;
    unsigned int _nextVariableAlias;
    unsigned int _nextTempTableAlias;
    NSString *_tableBase;
    NSString *_variableBase;
}

- (void)dealloc;
- (id)init;
- (id)generateSubqueryVariableAlias;
- (id)generateTableAlias;
- (id)initWithNestingLevel:(unsigned int)a0;

@end
