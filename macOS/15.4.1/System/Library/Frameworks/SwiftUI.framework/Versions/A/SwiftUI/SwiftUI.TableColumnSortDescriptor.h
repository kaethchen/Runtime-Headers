@class NSString;

@interface SwiftUI.TableColumnSortDescriptor : NSSortDescriptor {
    void /* unknown type, empty encoding */ base;
    void /* unknown type, empty encoding */ id;
}

@property (nonatomic, readonly) BOOL ascending;
@property (nonatomic, readonly) id reversedSortDescriptor;
@property (nonatomic, readonly) NSString *key;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithKey:(id)a0 ascending:(BOOL)a1 selector:(SEL)a2;
- (id)initWithKey:(id)a0 ascending:(BOOL)a1;
- (id)initWithKey:(id)a0 ascending:(BOOL)a1 comparator:(id /* block */)a2;

@end
