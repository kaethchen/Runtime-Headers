@interface RBEncoderSet : NSObject {
    struct refcounted_ptr<RB::Encoder::FontSet> { struct FontSet *_p; } _font_set;
    BOOL _final;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)commit;
- (void)addDisplayList:(id)a0;

@end
