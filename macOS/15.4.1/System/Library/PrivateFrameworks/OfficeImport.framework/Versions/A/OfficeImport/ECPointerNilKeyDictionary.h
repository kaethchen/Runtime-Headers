@interface ECPointerNilKeyDictionary : OITSUPointerKeyDictionary {
    id mNilKeyObject;
}

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forUncopiedKey:(id)a1;

@end
