@interface geo_isolater : NSObject {
    char *_name;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithName:(const char *)a0;

@end
