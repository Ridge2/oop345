#ifndef W5_NOTIFICATIONS_H
#define W5_NOTIFICATIONS_H
#include "Message.h"

namespace w5 {
  class Notifications {
  public:
    Notifications();
    Notifications(const Notifications&);
    Notifications& operator=(const Notifications&);
    Notifications(Notifications&&);
    Notifications&& operator=(Notifications&&);
    ~Notifications();
    void operator+=(const Message& msg);
    void display(std::ostream& os) const;
  };
}

#endif
