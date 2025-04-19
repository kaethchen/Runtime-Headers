@interface SNSetRestrictionsThunk : SASetRestrictions {
    void /* unknown type, empty encoding */ thunk;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 context:(id)a1;
- (id)initWithThunk:(id /* block */)a0;
- (void)siriNetwork_invokeThunk;

@end
