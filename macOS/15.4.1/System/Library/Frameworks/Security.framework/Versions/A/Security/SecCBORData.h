@class NSData;

@interface SecCBORData : SecCBORValue {
    NSData *m_data;
}

- (void).cxx_destruct;
- (int)fieldType;
- (id)initWith:(id)a0;
- (void)write:(id)a0;

@end
