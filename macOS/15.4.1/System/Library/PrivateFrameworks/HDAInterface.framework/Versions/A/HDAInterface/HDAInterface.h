@interface HDAInterface : NSObject {
    unsigned int mService;
    unsigned int mConnect;
}

+ (int)getEntryCount:(const char *)a0;

- (void)dealloc;
- (id)init;
- (int)UserClientScalarIScalarO:(unsigned int)a0 scalarICount:(unsigned int)a1 scalarOCount:(unsigned int)a2 scalarVargs:(void *)a3;
- (int)UserClientScalarIStructureO:(unsigned int)a0 scalarICount:(unsigned int)a1 structOSize:(unsigned long long *)a2 structO:(void *)a3 scalarVargs:(void *)a4;

@end
