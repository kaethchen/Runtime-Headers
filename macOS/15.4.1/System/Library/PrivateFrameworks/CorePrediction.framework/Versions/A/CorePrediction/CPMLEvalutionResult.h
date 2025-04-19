@class NSObject;

@interface CPMLEvalutionResult : NSObject {
    NSObject *object;
    unsigned long long count;
}

- (void).cxx_destruct;
- (id)getList;
- (double)getDouble;
- (int)getInt;
- (id)getListDict;
- (id)getString;
- (id)getStringList;
- (id)init:(id)a0 withConfigurationList:(id)a1;

@end
