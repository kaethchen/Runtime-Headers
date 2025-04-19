@interface CBORNegative : CBORValue {
    long long m_data;
}

- (long long)compare:(id)a0;
- (int)fieldType;
- (id)getLabel;
- (id)initWith:(long long)a0;
- (void)write:(id)a0;

@end
