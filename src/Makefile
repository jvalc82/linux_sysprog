#override INCLUDE += -I../include
SUBDIRS=fs io ipc limits memory process security signals std threads time tools users
#override TARGET +=
export INCLUDE += -I$(realpath ../include)

all: $(SUBDIRS)

fs:
	$(MAKE) -C $(PWD)/$@ $(TARGET) INCLUDE=$(INCLUDE)
io:
	$(MAKE) -C $(PWD)/$@ $(TARGET) INCLUDE=$(INCLUDE)
ipc:
	$(MAKE) -C $(PWD)/$@ $(TARGET) INCLUDE=$(INCLUDE)
limits:
	$(MAKE) -C $(PWD)/$@ $(TARGET) INCLUDE=$(INCLUDE)
memory:
	$(MAKE) -C $(PWD)/$@ $(TARGET) INCLUDE=$(INCLUDE)
process:
	$(MAKE) -C $(PWD)/$@ $(TARGET) INCLUDE=$(INCLUDE)
security:
	$(MAKE) -C $(PWD)/$@ $(TARGET) INCLUDE=$(INCLUDE)
signals:
	$(MAKE) -C $(PWD)/$@ $(TARGET) INCLUDE=$(INCLUDE)
std:
	$(MAKE) -C $(PWD)/$@ $(TARGET) INCLUDE=$(INCLUDE)
threads:
	$(MAKE) -C $(PWD)/$@ $(TARGET) INCLUDE=$(INCLUDE)
time:
	$(MAKE) -C $(PWD)/$@ $(TARGET) INCLUDE=$(INCLUDE)
tools:
	$(MAKE) -C $(PWD)/$@ $(TARGET) INCLUDE=$(INCLUDE)
users:
	$(MAKE) -C $(PWD)/$@ $(TARGET) INCLUDE=$(INCLUDE)

.PHONY: $(SUBDIRS)
