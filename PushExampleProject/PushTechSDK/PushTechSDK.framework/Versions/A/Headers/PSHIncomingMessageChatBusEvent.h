#import <Foundation/Foundation.h>

/**
 Bus event emitted after a successful app registration, that is when local model has been updated with the necessary info from Push Technologies platform in order to perform any operation. Event bus listeners (see `PSHBusProvider`) must implement the following method for event awareness:
 
    -(void)onIncomingMessageChatBusEvent:(NSNotification*)notification
    {
        PSHSuccessfulDeviceIdBusEvent* event = (PSHSuccessfulDeviceIdBusEvent*) notification.object;
        NSString *imcomingMessage = event.text;
        ...
    }
 */
@interface PSHIncomingMessageChatBusEvent : NSObject

/**
 *  Text of the notification generated by a chat incoming message.
 */
@property (nonatomic, strong) NSString *text;

@end