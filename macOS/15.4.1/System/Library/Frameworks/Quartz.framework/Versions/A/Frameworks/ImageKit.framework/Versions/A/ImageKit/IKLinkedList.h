@interface IKLinkedList : NSObject {
    id _first;
    id _last;
    unsigned long long _count;
}

- (void)dealloc;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)remove:(id)a0;
- (id)first;
- (id)last;
- (void)_setFirst:(id)a0;
- (void)addFirst:(id)a0;
- (void)addLast:(id)a0;
- (void)checkListConsistency;
- (void)moveFirst:(id)a0;
- (void)moveLast:(id)a0;

@end
