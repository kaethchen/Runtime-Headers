@interface _IPMDEventStateLegacy : NSObject {
    unsigned int _theEventClass;
    unsigned short _theEventKind;
    BOOL _eventState;
}

- (BOOL)eventState;
- (id)initWithClass:(unsigned int)a0 kind:(unsigned short)a1 state:(BOOL)a2;
- (BOOL)isEqual:(unsigned int)a0 Kind:(unsigned short)a1;
- (void)setEventState:(BOOL)a0;
- (unsigned int)theEventClass;
- (unsigned short)theEventKind;

@end
