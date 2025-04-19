@class NSString;

@interface SecCBORString : SecCBORValue {
    NSString *m_data;
}

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (int)fieldType;
- (id)getLabel;
- (id)initWith:(id)a0;
- (void)write:(id)a0;

@end
