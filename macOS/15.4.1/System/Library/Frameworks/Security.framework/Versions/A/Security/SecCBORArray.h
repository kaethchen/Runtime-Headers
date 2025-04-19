@class NSMutableArray;

@interface SecCBORArray : SecCBORValue {
    NSMutableArray *m_data;
}

- (id)init;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (int)fieldType;
- (id)initWith:(id)a0;
- (void)write:(id)a0;

@end
